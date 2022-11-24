<?php
    function factorielle($n){
        $fact = 1;
        for ($i = 1; $i <= $n ; $i++){
            $fact=$fact*$i;
        }
        echo " La factorielle vaut $fact";
    }

?>
