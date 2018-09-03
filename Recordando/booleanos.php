


<?php

// Datos booleanos
$carrito_venta = array("ryzen", "SSD", "RAM DDR4", "Mb Aorus");
$contador=0;
$num = 2;
$num2 = 2;
$band = 'f';


function comparar($a, $b){
	return ($a == $b) ? true : false;
}
function buscar(&$arreglo, $palabra){
	global $band;
	$j = 0;
	//echo "<br>el arreglo consta de ".count($arreglo)." elementos";
	//echo "<br>Se busca: ".$palabra;
	//echo "<br>Primer elemento del arreglo es: ".$arreglo[$j+1]."<br>";
	while(($j < count($arreglo))/* && ($band == 'f')*/){
		echo "<br>Posicion de contador ".$j;
		echo "<br>El valor de band es: ".$band;
		if(strcmp($arreglo[$j], $palabra) === 0){
			//echo "<br>Son iguales ALV <br>";
			$band = 'v';
		}// fin de IF
		$j++;
	}echo "<br>";
}// fin de funcion


if(comparar($num, $num2)){
	echo "<br>".$num." y ".$num2." SI son iguales";
}else{
	echo "<br>".$num." y ".$num2." NO son iguales";
}

echo "<br><br>Agregando mas elementos dentro de un array con array_push():<br>";
$nuevo_elemento = "Seasonic 800W";
array_push($carrito_venta, $nuevo_elemento);
echo "<br>Se ha agregado correctamente: <b>".$nuevo_elemento."</b> al carrito<br>";
echo "<br>Nueva lista de productos:<br>";

echo "<ul>";
foreach($carrito_venta as $art){
	$contador++;
	echo "<li>".$art."</li>";
}echo "</ul>";

echo "<br>Total de elementos en carrito: ".$contador;
$contador = 0;

echo "<br><br>Buscando elementos en el carrito para eliminar:<br>";
$eliminar = "SSD";

echo "<br>Palabra a buscar en carrito <b>".$eliminar."</b><br>";
buscar($carrito_venta, $eliminar);
echo "<br>band es: ".var_dump($band);
if($band == 'v'){ // TRUE oR FALSE
	echo "<br><b>".$eliminar."</b> se ha encontrado en el arreglo<br>";
}else{
	echo "<br><b>".$eliminar."</b> no se ha encontrado en el arreglo<br>";
}
	
else if()

?>