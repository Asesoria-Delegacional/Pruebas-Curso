
<?php

$numeros = array(4,3,1,6);

function burbuja(&$num)
{

    for($i = 0; $i < count($num); $i++){
        for($j = 0; $j < count($num)-1; $j++){
            // echo $j." ";
            $aux = $num[$j];
            if($num[$j] > $num[$j+1]){
                $num[$j] = $num[$j+1];
                $num[$j+1] = $aux;
            }
        }echo "<br />";

    }// fin de for
}
burbuja($numeros);
// foreach ($numeros as $value) {
//     echo "<br />".$value;
// }
echo "<br />".$numeros[0];
echo "<br />".$numeros[1];
echo "<br />".$numeros[2];
echo "<br />".$numeros[3];
 ?>
