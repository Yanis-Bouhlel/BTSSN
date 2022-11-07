function initialiser() {
  // Objet representant une coordonnée
  var latlng = new google.maps.LatLng({ lat: 48.95938120409442, lng: 2.5477254027393363 });
  var options = {
    center: latlng,
    zoom: 15,
  };

  var carte = new google.maps.Map(document.getElementById("carte"), options);

  const flightPlanCoordinates = [
    { lat: 48.960135160389015, lng: 2.548210237418417 },
    { lat: 48.96139172888674, lng: 2.5530585842092237 },
    { lat: 48.963318405762955, lng: 2.550838551731328 },
    { lat: 48.96072156296099, lng: 2.5430811968660367 },
    { lat: 48.959062863570324, lng: 2.544306042371083 },
    { lat: 48.95938120409442, lng: 2.5477254027393363 }
  ];
  const flightPath = new google.maps.Polyline({
    path: flightPlanCoordinates,
    geodesic: true,
    strokeColor: "#FF0000",
    strokeOpacity: 1.0,
    strokeWeight: 2,
  });

  const contentString =
    '<div id="content">' +
    '<div id="siteNotice">' +
    "</div>" +
    '<h1 id="firstHeading" class="firstHeading">Lycée Jean Rostand</h1>' +
    '<div id="bodyContent">' +
    "<p><b>Jean Rostand</b>, est le lycée qui acceuille la meilleure section <b>BTS SNIR</b> d'ile de france! " +
    "<br/> les statistiques y sont impréssionnantes... " +
    "here We are coding fun :'!'.</p>" +
    "<a href=https://lycee-jeanrostand.fr/>https://lycee-jeanrostand.fr</a> " +
    "</div>" +
    + "<br/>" +
    '<img src="https://static.nationalgeographic.fr/files/styles/image_3200/public/re%CC%81sume%CC%81_siliconvalley.webp?w=1600&h=1014" width=500em heigth=500em>' +
    "</div>";
  const infowindow = new google.maps.InfoWindow({
    content: contentString,
  });
  const marker = new google.maps.Marker({
    position: latlng,
    carte,
    title: "Lycée Jean Rostand",
  });

  marker.addListener("click", () => {
    infowindow.open(map, marker);
  });
  flightPath.setMap(carte);
  setMarkers(carte);
}


// On lance l'initialisation de notre carte
//initialiser();


function setMarkers(carte) {
  const LjrPtss = [
    ["point1", 48.95938120409442, 2.5477254027393363, 1],
    ["point2", 48.960135160389015, 2.548210237418417, 2],
    ["point3", 48.96139172888674, 2.5530585842092237, 3],
    ["point4", 48.963318405762955, 2.550838551731328, 4],
    ["point5", 48.96072156296099, 2.5430811968660367, 5],
    ["point6", 48.959062863570324, 2.544306042371083, 6],
  ];

  const image = {
    size: new google.maps.Size(20, 32),
    origin: new google.maps.Point(0, 0),
    anchor: new google.maps.Point(0, 32),
  };

  const shape = {
    coords: [1, 1, 1, 20, 18, 20, 18, 1],
    type: "poly",
  };

  for (let i = 0; i < LjrPtss.length; i++) {
    const LjrPts = LjrPtss[i];
    new google.maps.Marker({
      position: { lat: LjrPts[1], lng: LjrPts[2] },
      map: carte,
      icon: image,
      shape: shape,
      title: LjrPts[0],
      zIndex: LjrPts[3]
    });
  }

}
initialiser();

