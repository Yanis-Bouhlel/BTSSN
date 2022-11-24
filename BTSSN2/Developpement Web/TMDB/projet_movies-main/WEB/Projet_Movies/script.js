const app = document.getElementById('main')
// const nav = document.getElementById('nav')

// const logo = document.createElement('img')
// logo.src = 'logo.png'
// logo.setAttribute('class', 'imgnav')

const container = document.createElement('div')
container.setAttribute('class', 'container')

// nav.appendChild(logo)
app.appendChild(container)

var lien = "https://image.tmdb.org/t/p/w300";
var nb_it=0;
var request = new XMLHttpRequest()
request.open('GET', 'https://api.themoviedb.org/3/discover/movie?api_key=c0d3022f23baf17f36056bcaa58b1c30&language=en-US&sort_by=popularity.desc&include_adult=false&include_video=false&page=1&with_watch_monetization_types=flatrate', true)
request.onload = function () {
    // Begin accessing JSON data here
    var array = JSON.parse(this.response)
    console.log(array.results);
    if (request.status >= 200 && request.status < 400) {
        array.results.forEach(movie => {
        
            const card = document.createElement('div')
            card.setAttribute('class', 'movie')
            card.setAttribute('value',nb_it)
            nb_it++;

            const imgMovies = document.createElement('img')
            movie.poster_path = movie.poster_path.substring(0, 300)
            imgMovies.src = lien + `${movie.poster_path}`
            imgMovies.setAttribute('class', 'image')


            const overview = document.createElement('div')
            overview.setAttribute('class', 'overview')

            const p = document.createElement('p')
            p.textContent = movie.overview
            p.setAttribute('class','description')
            p.setAttribute('id', 'info')

            const h3 = document.createElement('h3')
            h3.textContent = movie.title
            h3.setAttribute('class','testrech')

            const h2vote = document.createElement('h2')
            h2vote.textContent = movie.vote_average
            h2vote.setAttribute('class','note')


            container.appendChild(card)
            card.appendChild(imgMovies)
            card.appendChild(h3)
            card.appendChild(overview)
            card.appendChild(h2vote)
            // card.appendChild(p)
            overview.appendChild(p)
        })
    } else {
        const errorMessage = document.createElement('marquee')
        errorMessage.textContent = `Gah, it's not working!`
        app.appendChild(errorMessage)
    }
}

request.send()

function search_() {
    let input = document.getElementById('search').value
    input = input.toLowerCase();
    let y = document.getElementsByClassName('movie');
    let x = document.getElementsByClassName('testrech');
    // let z = document.getElementsByClassName('note');

    for (i = 0; i < x.length; i++) {
        if (!x[i].innerHTML.toLowerCase().includes(input)) {
            x[i].style.display = "none";
            y[i].style.display = "none";
            // z[i].style.display = "none";
        }
    }
}