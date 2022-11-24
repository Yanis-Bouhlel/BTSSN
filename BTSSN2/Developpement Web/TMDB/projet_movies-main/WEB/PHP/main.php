<?php
    include "Triangle.php";
    include "Multiplication.php";
    include "Factoriel.php";
    include "Somme.php";
    include "Tri_Selection.php";



    define("EXERCICE",5);
    define("CONSOLE", FALSE);
    define("REFERENCE", FALSE);

    if (EXERCICE === 1){
        triangle($_GET ["nb_ligne"]);
    }

    if (EXERCICE === 2){
        $n = $_GET['n'];
        $m = $_GET['m'];
        multiplication($n, $m);
    }

    if (EXERCICE === 3){
        somme($_GET ["somme"]);
        echo '<br>';
        factorielle($_GET ["factorielle"]);
    }

    if (EXERCICE === 4){
        $tab = tri_selection($_GET['t']);
        echo json_encode($tab);
    }

    if (EXERCICE == 5){
        $tab1 = $_GET['t1'];
        $tab2 = $_GET['t2'];
        $tabShort = array_merge($tab1,$tab2);
        $tabShort = tri_selection($tabShort);
        echo json_encode($tabShort);
    }
?>
