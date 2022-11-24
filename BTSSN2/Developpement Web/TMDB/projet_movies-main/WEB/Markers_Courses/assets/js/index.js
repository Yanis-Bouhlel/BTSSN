// The following example creates complex markers to indicate markers near
// Sydney, NSW, Australia. Note that the anchor is set to (0,32) to correspond
// to the base of the flagpole.
function initMap(idSelect) {
    const map = new google.maps.Map(document.getElementById("map"), {
        zoom: 15,
        //center: {lat: 48.95930033308523, lng: 2.5477890651742516},
    });
    if(idSelect== undefined)
        idSelect =0;
    console.log(idSelect);
    setMarkers(map,idSelect);
}

function setMarkers(map,idSelect=0) {
    $.ajax({
            url: "main.php",
            method: "GET",
            dataType: "JSON",
            data: {id: idSelect},
            success: function(courses){

                //console.log(courses[idSelect]["markers"]);
                markers = courses["markers"];

                map.setCenter(markers[0]);

                for(let i=0; i<markers.length; i++){
                    mylat = markers[i]["lat"];
                    mylng = markers[i]["lng"];
                    new google.maps.Marker(
                        {
                            position : {lat: mylat, lng:  mylng},
                            map
                        }
                        );
                                                            
            }

            // polylines
                const flightPath = new google.maps.Polyline({
                path: markers,
                geodesic: true,
                strokeColor: "#FF0000",
                strokeOpacity: 1.0,
                strokeWeight: 2,
              });
            
              flightPath.setMap(map);

                
            }
        }
    );
    
     
}