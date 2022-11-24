const genres = [
    {
        "id": 28,
        "name": "Action"
    },
    {
        "id": 12,
        "name": "Adventure"
    },
    {
        "id": 16,
        "name": "Animation"
    },
    {
        "id": 35,
        "name": "Comedy"
    },
    {
        "id": 80,
        "name": "Crime"
    },
    {
        "id": 99,
        "name": "Documentary"
    },
    {
        "id": 18,
        "name": "Drama"
    },
    {
        "id": 10751,
        "name": "Family"
    },
    {
        "id": 14,
        "name": "Fantasy"
    },
    {
        "id": 36,
        "name": "History"
    },
    {
        "id": 27,
        "name": "Horror"
    },
    {
        "id": 10402,
        "name": "Music"
    },
    {
        "id": 9648,
        "name": "Mystery"
    },
    {
        "id": 10749,
        "name": "Romance"
    },
    {
        "id": 878,
        "name": "Science Fiction"
    },
    {
        "id": 10770,
        "name": "TV Movie"
    },
    {
        "id": 53,
        "name": "Thriller"
    },
    {
        "id": 10752,
        "name": "War"
    },
    {
        "id": 37,
        "name": "Western"
    }
]

const nav = document.getElementById('nav')

const a = document.createElement('a')
a.setAttribute('class', 'logo')
a.setAttribute('href', 'Movies.php')

const logo = document.createElement('img')
logo.src = '../assets/image/logoDonuts.jpg'
logo.setAttribute('class', 'imgnav')

nav.appendChild(a)
a.appendChild(logo)

var set4 = "ABC abc 123";

//   let urlParam = (new URL(document.location)).searchParams;
const urlParam = new URLSearchParams(window.location.search);
const params = urlParam.get("name");
console.log("film choisit est " + params);
console.log(params);
const maPage = urlParam.get("page");
console.log("MAPAGE : " + maPage);

var container = document.getElementById('container')

var card = document.createElement('div')
card.setAttribute('id', 'card')

var card2 = document.createElement('div')
card2.setAttribute('id', 'card2')

var video = document.createElement('div')
video.setAttribute('id', 'video')

container.appendChild(card)
container.appendChild(card2)
container.appendChild(video)

var lien = "https://image.tmdb.org/t/p/w300";
var nb_it = 0;
var request = new XMLHttpRequest()
var lienAPI = 'https://api.themoviedb.org/3/discover/movie?api_key=c0d3022f23baf17f36056bcaa58b1c30&&page=' + maPage;

request.open('GET', lienAPI, true)
request.onload = function (UnFilm) {
    var array = JSON.parse(this.response)
    var UnFilm = array.results;
    var temp_i = 0;
    if (request.status >= 200 && request.status < 400) {
        UnFilm.forEach(movie => {
            console.log(movie.id)
            if (movie.id == params) {
                UnFilm = UnFilm[temp_i];
                var imgMovies = document.createElement('img')
                UnFilm.poster_path = UnFilm.poster_path.substring(0, 300)
                imgMovies.src = lien + `${UnFilm.poster_path}`
                imgMovies.setAttribute('class', 'image')

                var br = document.createElement('br')

                var note = document.createElement('div')
                note.setAttribute('class', 'note')

                var h3note = document.createElement('h3')
                h3note.setAttribute('class', 'noteh3')
                h3note.innerHTML = UnFilm.vote_average

                var etoile = document.createElement('div')
                etoile.setAttribute('class', 'etoile')

                var imgEtoileRemplie = document.createElement('img')
                imgEtoileRemplie.src = "http://123streamcomplet.com/assets/images/star-on.png"
                imgEtoileRemplie.setAttribute('class', 'EtoileRemplie')

                var imgEtoileRemplie2 = document.createElement('img')
                imgEtoileRemplie2.src = "http://123streamcomplet.com/assets/images/star-on.png"
                imgEtoileRemplie2.setAttribute('class', 'EtoileRemplie2')

                var imgEtoileRemplie3 = document.createElement('img')
                imgEtoileRemplie3.src = "http://123streamcomplet.com/assets/images/star-on.png"
                imgEtoileRemplie3.setAttribute('class', 'EtoileRemplie3')

                var imgEtoileMoitier = document.createElement('img')
                imgEtoileMoitier.src = "http://123streamcomplet.com/assets/images/star-half.png"
                imgEtoileMoitier.setAttribute('class', 'EtoileMoitier')

                var imgEtoileVide = document.createElement('img')
                imgEtoileVide.src = "http://123streamcomplet.com/assets/images/star-off.png"
                imgEtoileVide.setAttribute('class', 'EtoileVide')

                var pnbrvote = document.createElement('p')
                pnbrvote.setAttribute('id', 'nbrvote')
                pnbrvote.innerHTML = "Nombre de vote : " + UnFilm.vote_count

                var h1title = document.createElement('h1')
                h1title.setAttribute('id', 'title')
                h1title.innerHTML = UnFilm.title

                var pdesc = document.createElement('p')
                pdesc.setAttribute('id', 'description')
                pdesc.innerHTML = UnFilm.overview

                var pgenre = document.createElement('p')
                pgenre.setAttribute('id', 'genre')

                var maChaine = "";

                genres.forEach(monGenre => {
                    UnFilm.genre_ids.forEach(temp => {
                        if (monGenre.id == temp) {
                            maChaine = maChaine + monGenre.name + ", ";
                            pgenre.innerHTML = "Genre : " + maChaine;
                        }
                    })
                })


                var plangue = document.createElement('p')
                plangue.setAttribute('id', 'langue')
                plangue.innerHTML = "Langue : " + UnFilm.original_language

                var pdatesortie = document.createElement('p')
                pdatesortie.setAttribute('id', 'datesortie')
                pdatesortie.innerHTML = "Date de sortie : " + UnFilm.release_date

                console.log("UnFilm.id = " + UnFilm.id);


                card.appendChild(imgMovies);
                card.appendChild(br);
                card.appendChild(note);
                note.appendChild(h3note);
                // note.appendChild(etoile);
                // etoile.appendChild(imgEtoileRemplie);
                // etoile.appendChild(imgEtoileRemplie2);
                // etoile.appendChild(imgEtoileRemplie3);
                // etoile.appendChild(imgEtoileMoitier);
                // etoile.appendChild(imgEtoileVide);
                card.appendChild(pnbrvote);
                card2.appendChild(h1title);
                card2.appendChild(pdesc);
                card2.appendChild(pgenre);
                card2.appendChild(plangue);
                card2.appendChild(pdatesortie);
                getVideo(UnFilm.id);
            }
            temp_i++;
        })
    }
}
request.send()

function getVideo(id) {
    var monLien = "https://api.themoviedb.org/3/movie/" + id + "/videos?api_key=c0d3022f23baf17f36056bcaa58b1c30"
    $.ajax({
        url: monLien,
        method: "GET",
        dataType: "JSON",
        success: function (reponse) {
            console.log("entre dans l'ajax");
            const videomovie = document.createElement('iframe')
            videomovie.setAttribute('width', '1000')
            videomovie.setAttribute('height', '615')
            console.log(reponse.results)
            var nb_it3 = 0;
            reponse.results.forEach(jec => {
                var lienYTB = "https://www.youtube.com/embed/" + reponse.results[nb_it3].key;
                videomovie.setAttribute('src', lienYTB)
                video.appendChild(videomovie);
                nb_it3++;
            })

        }
    })
}

function test() {
    $.ajax({
        url: "https://api.themoviedb.org/3/movie/" + movie.id + "/videos?api_key=c0d3022f23baf17f36056bcaa58b1c30",
        method: "GET",
        dataType: "JSON",
        success: function (video) {
            console.log(video)
        }
    })
}

function unlog() {
    const urldeco = "connexion.php"
    document.location.href = urldeco;
}

var theToggle = document.getElementById('toggle');

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
    var newClass = ' ' + elem.className.replace(/[\t\r\n]/g, ' ') + ' ';
    if (hasClass(elem, className)) {
        while (newClass.indexOf(' ' + className + ' ') >= 0) {
            newClass = newClass.replace(' ' + className + ' ', ' ');
        }
        elem.className = newClass.replace(/^\s+|\s+$/g, '');
    }
}
// toggleClass
function toggleClass(elem, className) {
    var newClass = ' ' + elem.className.replace(/[\t\r\n]/g, " ") + ' ';
    if (hasClass(elem, className)) {
        while (newClass.indexOf(" " + className + " ") >= 0) {
            newClass = newClass.replace(" " + className + " ", " ");
        }
        elem.className = newClass.replace(/^\s+|\s+$/g, '');
    } else {
        elem.className += ' ' + className;
    }
}

$(function(){
    $("#toggle").click(function(){
        $("html, body").animate({scrollTop: 0},"slow");
    });
});