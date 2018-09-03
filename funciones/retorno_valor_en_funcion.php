

<?php

$subtotal = 1500;
$tasa = .16;
$iva = 0;
$edad = 1;

function calcularIva($sub, $ta){
  $ivaCalculado = $sub * (1 + $ta);
  return $ivaCalculado;
}
function validaEdad($_edad){
  $valida = ($_edad <= 0 || $_edad > 120); // retorna true or false
  return !$valida;
}


echo "<br />Subtotal: ".$subtotal;

// Calculando IVA
$iva = calcularIva($subtotal, $tasa);
echo "<br />Total: ".$iva;
if(validaEdad($edad)){
  echo "<br />Edad valida";
}else{
  echo "<br />Edad invalida";
}
?>
