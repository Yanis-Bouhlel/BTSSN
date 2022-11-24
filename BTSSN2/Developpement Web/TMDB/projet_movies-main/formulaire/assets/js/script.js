const app = document.getElementById('main')
const app2 = document.getElementsByClassName('card')
const nav = document.getElementById('nav')

const a = document.createElement('a')
a.setAttribute('class', 'logo')
a.setAttribute('href', 'Movies.php')

const logo = document.createElement('img')
logo.src = '../assets/image/logoDonuts.jpg'
logo.setAttribute('class', 'imgnav')

const container = document.createElement('div')
container.setAttribute('class', 'container')
container.setAttribute('id','contain');

nav.appendChild(a)
a.appendChild(logo)
app.appendChild(container)

var lien = "https://image.tmdb.org/t/p/w300";
var nb_it = 0;

var maPage = 1;

function appel(temp) {
    if(temp == 's'){
        if(maVar < 500){
            maVar++;
        }
    } else if(temp == 'p'){
        if(maVar>1){
            maVar--;
        }
    } else if(temp=='depart') {
        maVar = 1;
    }
    maPage = maVar;
    suppCards();
    console.log(maPage);
    var monAPI = "https://api.themoviedb.org/3/discover/movie?api_key=c0d3022f23baf17f36056bcaa58b1c30&&page="+maVar;
    $.ajax({
                url: monAPI,
                method: "GET",
                dataType:'JSON',
                success: function(reponse){
                    console.log(reponse.results);
                    reponse.results.forEach(movie => {
                        const card = document.createElement('div')
                        card.setAttribute('class', 'movie')
                        card.setAttribute('value', movie.id)
                        nb_it++;
            
                        const imgMovies = document.createElement('img')
                        movie.poster_path = movie.poster_path.substring(0, 300)
                        imgMovies.src = lien + `${movie.poster_path}`
                        imgMovies.setAttribute('class', 'image')
            
                        const h3 = document.createElement('h3')
                        h3.textContent = movie.title
                        h3.setAttribute('class', 'testrech')
            
                        const overview = document.createElement('div')
                        overview.setAttribute('class', 'overview')
            
                        const h2des = document.createElement('h2')
                        h2des.textContent = "Description"
                        h2des.setAttribute('class', 'desc')
            
                        const p = document.createElement('p')
                        p.textContent = movie.overview
                        p.setAttribute('class', 'description')
                        p.setAttribute('id', 'info')

                        const divBouton = document.createElement('div')
                        divBouton.setAttribute('class', 'divBouton')
            
                        const bouton = document.createElement('button')
                        bouton.setAttribute('class', 'btn_svrp')
                        bouton.setAttribute('id', movie.id, movie.id)
                        bouton.textContent = "En savoir plus"
                        bouton.setAttribute('onclick', 'redirection_film(this.id)')

                        const favoris = document.createElement('div')
                        favoris.setAttribute('class', 'divFav')

                        const favorisImg = document.createElement('img')
                        favorisImg.setAttribute('class', 'imgFav')
                        favorisImg.src = "../assets/image/favoris2.png"
            
                        const divnot = document.createElement('div')
                        divnot.setAttribute('class', 'note')
            
                        const divnot2 = document.createElement('div')
                        divnot2.setAttribute('class', 'note2')
                        
                        const divnot3 = document.createElement('div')
                        divnot3.setAttribute('class', 'note3')
                        
                        const divnot4 = document.createElement('div')
                        divnot4.setAttribute('class', 'note4')
            
                        const spannote = document.createElement('span')
                        
                        spannote.setAttribute('class', '')
                        spannote.textContent = movie.vote_average
                        spannote.style.color = Color(movie.vote_average)
                       
                        const canva = document.createElement('canvas')
                        canva.setAttribute('height', '34')
                        canva.setAttribute('width', '34')
                        canva.setAttribute('class', 'canva')
            
            
                        container.appendChild(card)
                        card.appendChild(imgMovies)
                        card.appendChild(h3)
                        card.appendChild(overview)
                        card.appendChild(divnot)
                        divnot.appendChild(divnot2)
                        divnot2.appendChild(divnot3)
                        divnot3.appendChild(divnot4)
                        divnot3.appendChild(canva)
                        divnot4.appendChild(spannote)
                        
                        overview.appendChild(h2des)
                        overview.appendChild(p)
                        overview.appendChild(divBouton)
                        divBouton.appendChild(bouton)
                        divBouton.appendChild(favoris)
                        favoris.appendChild(favorisImg)
                        
                    })
                }
            }
    );
};

appel('depart');

function unlog() {
    const urldeco = "index.php"
    document.location.href = urldeco;
}

function getGenres() {
    var nb_it2 = 0;
    $.ajax({
        url: "https://api.themoviedb.org/3/genre/movie/list?api_key=c0d3022f23baf17f36056bcaa58b1c30&language=fr-FR",
        method: "GET",
        dataType: "JSON",
        success: function (reponse) {
            reponse = reponse["genres"];
            reponse.forEach(key => {

                var option = document.createElement("option");
                option.innerText = key.name;
                nb_it2++;
                option.setAttribute('value', key.id);
                option.setAttribute('enabled', 'true');

                var mySelect = document.getElementById("select_criteres");
                mySelect.appendChild(option);
            });
        }
    });
}

getGenres();

function search_() {
    let input = document.getElementById('search').value
    input = input.toLowerCase();
    let y = document.getElementsByClassName('movie');
    let x = document.getElementsByClassName('testrech');

    for (i = 0; i < x.length; i++) {
        if (!x[i].innerHTML.toLowerCase().includes(input)) {
            x[i].style.display = "none";
            y[i].style.display = "none";
        }else{
            x[i].style.display = " ";
            y[i].style.display = " ";
        }
    }
}

function redirection_film(value) {
    const url = "film.php?name=" + value + "&&page=" + maPage + "" ;
    document.location.href = url;
}

function Color(vote) {
    if(vote>= 7){
        return 'green'
    }else if(vote >= 6 && vote<7){
        return "orange"
    }else{
        return 'red'
    }
}

function ajout_genre(myVal) {

    $.ajax({
        url: "https://api.themoviedb.org/3/genre/movie/list?api_key=c0d3022f23baf17f36056bcaa58b1c30&language=fr-FR",
        method: "GET",
        dataType: "JSON",
        success: function (reponse) {
            genres = reponse["genres"];

            genres.forEach(key => {
                if (myVal == key.id) {

                    var critChoisi = document.createElement("button");
                    critChoisi.setAttribute('class', 'critere');
                    critChoisi.setAttribute('onclick', 'retire_genre(this.value,this.id)');
                    critChoisi.setAttribute('value', key.id);
                    critChoisi.setAttribute('id', key.name);

                    var divBut = document.getElementById("divBut");
                    divBut.appendChild(critChoisi);

                    var spanincrit = document.createElement("span");
                    spanincrit.setAttribute("class", "txtInButt");
                    spanincrit.innerText = key.name;
                    critChoisi.appendChild(spanincrit);

                    var mySelec = document.getElementById("select_criteres");
                    mySelec.value = 0;

                    for (let i = 0; i < mySelec.length; i++) {
                        if (myVal == mySelec[i].value) {
                            mySelec[i].removeAttribute("enabled");
                            mySelec[i].setAttribute("disabled", "false");
                        }
                    }
                }
            }) //fin forEach
            var filmOk = false;
            $.ajax({
                url: "https://api.themoviedb.org/3/discover/movie?api_key=c0d3022f23baf17f36056bcaa58b1c30",
                method: "GET",
                dataType: "JSON",
                success: function (reponse) {
                    reponse = reponse.results;
                    reponse.forEach(key => {
                        var genresID = key.genre_ids;
                        for (let j = 0; j < genresID; j++) {
                            // console.log(genresID[j]);
                            if (genresID[j] == myVal) {
                                filmOk = true;
                            }
                        }
                        if (filmOk) {
                            console.log(key);
                            makeAppear(key);
                        }
                        filmOk = false;
                    })
                }
            });
        } // fin fonction success
    }); // fin ajax
}

function retire_genre(myVal, myName) {

    const mySelec = document.getElementById("select_criteres");

    for (let i = 0; i < mySelec.length; i++) {
        if (myName == mySelec[i].textContent) {
            mySelec[i].removeAttribute("disabled");
            mySelec[i].setAttribute("enabled", "true");
            var myButton = document.getElementById(mySelec[i].textContent);
            myButton.remove();
        }
    }

    var cards = document.getElementsByClassName('movie');
    var titres = document.getElementsByClassName('testrech');
    var tempGenres = document.getElementsByClassName('critere');

    if (tempGenres.length == 0) {
        for (let j = 0; j < cards.length; i++) {
            // suppCards();
            // suppCards();
        }
    }
    var valTemp = 0;

    for (let i = 0; i < cards.length; i++) {
        console.log("march po" + cards[i].style);
        if (cards[i].style == "display: none") {
            console.log("CA MARARCOLJIDHS");
        }
    }

    console.log(myVal);
}

function makeAppear(film) {
    var cards = document.getElementsByClassName('movie');
    for (let i = 0; i < cards.length; i++) {
        var maCarte = cards[i];
        if (film.id != cards[i].id) {
            if (maCarte.id != 'valid') {
                maCarte.style.display = "none";
            }
        } else {
            maCarte.style.removeProperty('display');
            maCarte.setAttribute('id', 'valid');
        }
    }
}

// a pas utiliser pr rien
function suppCards() {
    document.getElementById('contain').innerHTML = '';
}
//




var theToggle = document.getElementById('toggle');

// based on Todd Motto functions
// https://toddmotto.com/labs/reusable-js/

// hasClass
function hasClass(elem, className) {
	return new RegExp(' ' + className + ' ').test(' ' + elem.className + ' ');
}
// addClass
function addClass(elem, className) {
    if (!hasClass(elem, className)) {
    	elem.className += ' ' + className;
    }
}
// removeClass
function removeClass(elem, className) {
	var newClass = ' ' + elem.className.replace( /[\t\r\n]/g, ' ') + ' ';
	if (hasClass(elem, className)) {
        while (newClass.indexOf(' ' + className + ' ') >= 0 ) {
            newClass = newClass.replace(' ' + className + ' ', ' ');
        }
        elem.className = newClass.replace(/^\s+|\s+$/g, '');
    }
}
// toggleClass
function toggleClass(elem, className) {
	var newClass = ' ' + elem.className.replace( /[\t\r\n]/g, " " ) + ' ';
    if (hasClass(elem, className)) {
        while (newClass.indexOf(" " + className + " ") >= 0 ) {
            newClass = newClass.replace( " " + className + " " , " " );
        }
        elem.className = newClass.replace(/^\s+|\s+$/g, '');
    } else {
        elem.className += ' ' + className;
    }
    document.body.scrollTop = 0;
}

$(function(){
    $("#toggle").click(function(){
        $("html, body").animate({scrollTop: 0},"slow");
    });
});

$(function(){
    $("#toggle2").click(function(){
        $("html, body").animate({scrollTop: 0},"slow");
    });
});