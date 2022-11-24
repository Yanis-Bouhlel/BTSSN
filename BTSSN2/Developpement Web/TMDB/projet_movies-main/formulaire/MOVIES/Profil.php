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
        <form id="form">
            <input type="text" id="search" class="search" placeholder="Search" onkeyup="search_()">
        </form>
        <!-- <div class="proetpara">

            <img class="avatar" src="avatar2.png">
            <div id="menu">
                <ul>
                    <li><a href="Profil.html">Profil</a></li>
                    <li><a href="favoris.html">Vos Favoris</a></li>

                    <li><button class="button" onclick="unlog()">Deconnexion</button></li>
                </ul>
            </div>
            <span class="tooltiptext">Profil et Paramétre</span>
        </div> -->

        

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

    <main id="profil">
        <!-- <h1 style="color: white;">Votre Profil</h1> -->
        <br>
        <div style="position: relative; display: flex; flex-wrap: wrap;">
            <div style="width: 345px; margin: 1rem;">
                <img src="../assets/image/maintenance.jpg" style="margin-left: -200px;">
            </div>
            <div style="width: 345px; margin: 1rem;">
                <h1 style="margin-left: -120px;">EN MAINTENANCE</h1>
            </div>
        </div>
    </main>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="../assets/js/script.js"></script>
</body>

</html>