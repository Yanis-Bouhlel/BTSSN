<?php
function somme($n){
    $result = 0;
    for ($i = 0;$i <= $n; $i++ ){
        $result = $result + $i;
    }
    echo "La somme vaut $result";
}
?>
