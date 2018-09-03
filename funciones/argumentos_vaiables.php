<?php
declare(strict_types = 1);
function suma($simbolo, int ...$numeros){
    $total = 0;
    foreach ($numeros as $valor) {
        $total += $valor;
    }
    return $simbolo.$total;
}


echo suma("$ ",1,3,2,4,5,6);


 ?>
