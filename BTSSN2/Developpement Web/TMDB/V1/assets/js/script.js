const IMG_PATH = "https://image.tmdb.org/t/p/w1280";
const SEARCH_URL = "https://api.themoviedb.org/3//search/movie?api_key=8431885ab3bb64801753c3d3003f7606"
const LINK_API = "https://api.themoviedb.org/3/discover/movie?api_key=8431885ab3bb64801753c3d3003f7606"

const main = document.getElementById("main")
const search = document.getElementsByClassName("search")
const form = document.getElementById('form')


    function getApi(link)
    {
        $.ajax({
            url: link,
            method: "GET",
            dataType: "JSON",
            success: function (data)
            {
                getMovie(data.results);
            }
        });
    }
    function getMovie(data)
    {
        data.forEach(movie =>{
            console.log(data)
            const {title, poster_path, vote_average, overview} = movie
            const card = document.createElement('div')
            card.classList.add('movie')
            card.innerHTML =
                `
                    <img src="${IMG_PATH + poster_path}" alt='${title}'>
                    <div class="movie-info">
                        <h3>${title}</h3>
                        <span class="${getColor(vote_average)}">${vote_average}</span>
                    </div>
                    <div class="overview">
                        <h2>Description : </h2>
                        <p>${overview}</p>
                    </div>
                `
            main.appendChild(card)
        })
    }
    function getColor(vote)
    {
        if(vote >= 8){
            return 'green'
        }
        else if(vote >= 5){
            return 'orange'
        }
        else{
            return 'red'
        }
    }
    function getSearch()
    {
        const searchFilm = search.value
        if (searchFilm) {
            getMovies(SEARCH_URL + '&query=' + searchFilm)
        }
    }

    getApi(LINK_API)
