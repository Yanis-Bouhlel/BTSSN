function initialiser() {
    // Objet representant une coordonnée
    var latlng = new google.maps.LatLng(48.95901196804638, 2.547697153340051);
    var options = {
        center: latlng,
        zoom: 15,
    };
    
    var carte = new google.maps.Map(document.getElementById("carte"), options);
    
    
      const flightPath = new google.maps.Polyline({
        path: setMarkers(carte),
        geodesic: true,
        strokeColor: "#FF0000",
        strokeOpacity: 1.0,
        strokeWeight: 2,
      });
      flightPath.setMap(carte);
    setMarkers(carte);
}


// On lance l'initialisation de notre carte
//initialiser();


function setMarkers(carte) {
    $.ajax({
            url: "markers.Jrostand.json",
            method: "GET",
            dataType: "json",
            success: function oui(mark){
                        for (let i=0 ; i < mark.length; i++) {
                                new google.maps.Marker({
                                position: { lat: mark[i].lat, lng: mark[i].lng },
                                map: carte,
                            });
                        }
                    }
        }
    );
}
initialiser();
    
