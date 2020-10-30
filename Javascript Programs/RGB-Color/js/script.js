window.addEventListener('load', start);

let rangeVermelho = document.querySelector('#rangeVermelho');
let rangVverde = document.querySelector('#rangVverde');
let rangeAzul = document.querySelector('#rangeAzul');

let txtVermelho = document.querySelector('#txtVermelho');
let txtVerde = document.querySelector('input#txtVerde');
let txtAzul = document.querySelector('input#txtAzul');

let vVermelho = '0';
let vVerde = '0';
let vAzul = '0';

let campo = document.querySelector('div.quadrado');

function start() {
  rangeVermelho.addEventListener('input', funVermelho);
  rangVverde.addEventListener('input', funVerde);
  rangeAzul.addEventListener('input', funAzul);

  campo.style.backgroundColor =
    'rgb(' + vVermelho + ',' + vVerde + ',' + vAzul + ')';
  txtVermelho.value = vVermelho;
  txtVerde.value = vVerde;
  txtAzul.value = vAzul;
}
('');
function funVermelho(event) {
  vVermelho = event.target.value;
  txtVermelho.value = vVermelho;

  campo.style.backgroundColor =
    'rgb(' + vVermelho + ',' + vVerde + ',' + vAzul + ')';
}

function funVerde(event) {
  vVerde = event.target.value;
  txtVerde.value = vVerde;

  campo.style.backgroundColor =
    'rgb(' + vVermelho + ',' + vVerde + ',' + vAzul + ')';
}

function funAzul(event) {
  vAzul = event.target.value;
  txtAzul.value = vAzul;

  campo.style.backgroundColor =
    'rgb(' + vVermelho + ',' + vVerde + ',' + vAzul + ')';
}
