<?php 
session_start();
?>

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <link rel="stylesheet" href="../assets/css/styleMovie.css" />
  <title>The Donuts Movies</title>
</head>

<body>
  <header id="nav">

    <div id="divBut"></div>

    <!-- <select class="choix" id="select_criteres" onchange="ajout_genre(this.value)">
        <option value="0" selected="selected" disabled="disabled">Genres</option>
    </select> -->

    <form id="form">
      <input type="text" id="search" class="search" placeholder="Search" onkeyup="search_()">
    </form>

    <!-- <div class="proetpara">

      <img class="avatar" src="avatar2.png">
      
        <span class="tooltiptext">
          
            <?php
              // echo $_SESSION['prenom'];
            ?>
            toto
          <br>
          <a  class="atootltip" href="Profil.html">Profil</a>
          <br>
          <a  class="atootltip" href="favoris.html"><img class="EtoileFavoris" src="http://123streamcomplet.com/assets/images/star-off.png">Vos Favoris</a><hr>
          <button class="button" onclick="unlog()">Deconnexion</button>
        </span>
      
      
    </div> -->

    <a href="#filtrer" id="toggle2" onclick="toggleClass(this, 'on')"><img src="../assets/image/filtre.png" style="width: 25px; height: 25px; margin-top: 17px;"></a>

    <div id="filtrer">
      <select class="choix" id="select_criteres" onchange="ajout_genre(this.value)">
        <option value="0" selected="selected" disabled="disabled">Genres</option>
      </select>
    </div>

    <a href="#menu" id="toggle" onclick="toggleClass(this, 'on')"><img class="avatar" src="../assets/image/avatar2.png"></a>

    <div id="menu">
        <ul>
            <li style="color: #888;">
              <div class="pseudo">
                <div class="imgPseudo">
                  <img class="avatar2" src="../assets/image/avatar2.png">
                </div>
                <div class="pseudo">
                  <p style="color: black;">
                    <?php 
                      echo $_SESSION['pseudo'];
                    ?>
                  </p>
                </div>
              </div>
            </li><hr>
            <li><a href="Profil.php" class="texta"><img class="EtoileFavoris" src="../assets/image/compte.png"> Profil</a></li>
            <li><a href="favoris.php" class="texta"><img class="EtoileFavoris" src="../assets/image/favoris2.png"> Vos Favoris</a></li><hr>
            <!-- <li><button class="button" onclick="unlog()">Deconnexion</button></li> -->
            <li><a href="javascript:onclick=unlog()" class="texta"><img class="EtoileFavoris" src="../assets/image/deconnexion.png"> Deconnexion</a></li>
        </ul>
    </div>

  </header>

 

  <main id="main">
    <!-- <button class='pages_butt' id="buttPrec" onclick="appel('p')">Precedent</button>
    <button class='pages_butt' id="buttSuivant" onclick="appel('s')">Suivant</button> -->
  </main>

  <div>
    <a href="javascript:onclick=appel('p')"><img src="../assets/image/gauche.png" style="width: 55px; height: 55px; margin-left: 780px;"></a>
    <!-- <div class="numpage">
      <a href="javascript:onclick=appel('p')">1</a>
      <a href="javascript:onclick=appel('s')">2</a>
      <a href="javascript:onclick=appel('s')">3</a>
      <a href="javascript:onclick=appel('s')">4</a>
      <a href="javascript:onclick=appel('s')">5</a>
      <a href="javascript:onclick=appel('s')">6</a>
      <a href="javascript:onclick=appel('s')">7</a>
      <a href="javascript:onclick=appel('s')">8</a>
      <a href="javascript:onclick=appel('s')">9</a>
      <a href="javascript:onclick=appel('s')">10</a>
    </div> -->
    <a href="javascript:onclick=appel('s')"><img src="../assets/image/droite.png" style="width: 55px; height: 55px; margin-left: 210px; "></a>
    <!-- <button class='pages_butt' id="buttPrec" onclick="appel('p')">Precedent</button>
    <button class='pages_butt' id="buttSuivant" onclick="appel('s')">Suivant</button> -->
  </div>
  
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script type="text/javascript" src="../assets/js/script.js"></script>
</body>

</html>