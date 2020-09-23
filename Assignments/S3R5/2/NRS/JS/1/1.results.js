//koda JavaScript, ki izračuna rzultate testa

var steviloVprasanj = 10;
var steviloOdgovorov = 3;

function izracunajRezultat(form) {
	let tocke = 0;
	let trenutniElement;
	let trenutnaIzbira;

	for (i = 0; i < steviloVprasanj; i++) {
		trenutniElement = i * steviloOdgovorov;
		for (j = 0; j < steviloOdgovorov; j++) {
			trenutnaIzbira = form.elements[trenutniElement + j];
			if (trenutnaIzbira.checked) {
				if (trenutnaIzbira.value == odgovor[i]) {
					tocke++;
					break;
				}
			}
		}
	}

	tocke = Math.round(tocke / steviloVprasanj * 100);
	form.percentage.value = tocke + "%";

	let pravilniOdgovor = "";
	for (i = 1; i <= steviloVprasanj; i++) {
		pravilniOdgovor += i + `. ${odgovor[i-1]}\r\n`;
	}
	form.solutions.value = pravilniOdgovor;
}
