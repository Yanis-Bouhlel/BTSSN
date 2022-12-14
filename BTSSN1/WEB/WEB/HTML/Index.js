var carte;
var choix = 0;

function initialisation(choix) {
  // Objet representant une coordonnée
  if (choix == 1) {
    var latlng = new google.maps.LatLng( 1.4444444444444444, 1.5555555555555556);
    var options = {
      center: latlng,
      zoom: 5,
    };
  }
  else if (choix == 2) {
    var latlng = new google.maps.LatLng(48.96178100623078, 2.510851345189964);
    var options = {
      center: latlng,
      zoom: 13.8,
    };
  }
  else if (choix == 3) {
    var latlng = new google.maps.LatLng(48.95867389954952, 2.548546097350723);
    var options = {
      center: latlng,
      zoom: 16.8,
    };
  }
  else
  {
    var latlng = new google.maps.LatLng(48.95901196804638, 2.547697153340051);
  var options = {
    center: latlng,
    zoom: 15,
  };
  }
  

  carte = new google.maps.Map(document.getElementById("carte"), options);
  $.ajax({
    url: "courses.json", 
    method: "GET",
    dataType: "JSON",
    success: (mark) => {

      /*if (choix == 1) {
        console.log(mark[0]);

        for (let y = 0; y < mark[0].length; y++) {
          markers = new google.maps.Marker({
            position: { lat: mark[0][y].lat, lng: mark[0][y].lng },
            map: carte,
          });
          const lignes = new google.maps.Polyline({
            path: mark[0],
            geodesic: true,
            strokeColor: "#FF0000",
            strokeOpacity: 1.0,
            strokeWeight: 2,
          });
          lignes.setMap(carte);
        }
      }*/

      if (choix == 2) {
        console.log(mark[1]);

        for (let y = 0; y < mark[1].length; y++) {
          markers = new google.maps.Marker({
            position: { lat: mark[1][y].lat, lng: mark[1][y].lng },
            map: carte,
          });
          const lignes = new google.maps.Polyline({
            path: mark[1],
            geodesic: true,
            strokeColor: "#FF0000",
            strokeOpacity: 1.0,
            strokeWeight: 2,
          });
          lignes.setMap(carte);
        }
      }
      if (choix == 3) {
        console.log(mark[2]);

        for (let y = 0; y < mark[1].length; y++) {
          markers = new google.maps.Marker({
            position: { lat: mark[2][y].lat, lng: mark[2][y].lng },
            map: carte,
          });
          const lignes = new google.maps.Polyline({
            path: mark[2],
            geodesic: true,
            strokeColor: "#FF0000",
            strokeOpacity: 1.0,
            strokeWeight: 2,
          });
          lignes.setMap(carte);
        }
      }
    }
  })
}



function test(choix)
{
  $.ajax({
    url: "TEXT.json",
    method: "GET",
    dataType: "JSON",
    success: (text) => {
      if (choix == 1) {
        for(let i = 0 ; i < text.length ; i++)
        console.log(text[0]);
          markers = new google.maps.Marker({
            position: { lat: text[0].lat, lng: text[0].lng },
            map: carte,
          });
          }
          else 
          {
            if (choix == 1) {
              console.log(text[0]);
                markers = new google.maps.Marker({
                  position: { lat: text[0].lat, lng: text[0].lng },
                  map: carte,
                });
          }
      
    }
        }}
          )
}


initialisation();