# DNA to mRNA and Amino Acid Translator

This is a C++ course project. The program reads a DNA sequence from a text file, converts it into mRNA, detects START and STOP codons, and translates the codons between them into amino acids. At the end, it displays basic statistics about the detected amino acid sequences.

## Project Goal

The goal of this project was to create a program that:

- reads a DNA sequence from a `.txt` file,
- converts DNA into mRNA,
- detects the START codon `AUG`,
- translates codons into amino acids,
- stops translating a sequence when a STOP codon is found,
- continues searching for further START and STOP codons after the first STOP,
- displays the number and length of detected amino acid sequences,
- calculates the frequency of each amino acid.

## Project Structure

The project consists of the following files:

```text
PROJEKT.cpp
Źródło1.cpp
Header.h
DNA_przyklad.txt
```

## PROJEKT.cpp

This is the main file of the program. It contains the `main()` function, where the program starts.

It:

- reads the DNA sequence from a file,
- checks if the file was opened correctly,
- converts DNA into mRNA,
- prints the DNA and mRNA sequences,
- calls the function responsible for translating mRNA into amino acids.

## Źródło1.cpp

This file contains the definitions of the main functions used in the project:

- `wczytajDNA()` — reads the DNA sequence from a text file,
- `zamienNaMRNA()` — converts DNA into mRNA,
- `kodonNaAminokwas()` — converts a single codon into an amino acid,
- `tlumacz()` — searches for START and STOP codons, translates codons into amino acids, and displays statistics.

## Header.h

This is the header file. It contains declarations of the functions used in the project.

## DNA_przyklad.txt

This is the input file. It contains an example DNA sequence used for testing the program.

## Used Concepts

The project uses functions and arrays.

Arrays are used to:

- store amino acid names,
- count amino acid occurrences,
- store the lengths of detected amino acid sequences.

Example arrays used in the program:

```cpp
string nazwyAA[20];
int licznikAA[20];
int dlugoscSekwencji[100];
```

## START and STOP Codons

The program detects the START codon:

```text
AUG
```

The program detects the following STOP codons:

```text
UAA
UAG
UGA
```

## Example Output

For an example DNA sequence, the program may produce the following output:

```text
Sekwencja aminokwasowa nr 1
START: pozycja 71 w mRNA
AUG -> Metionina
GCC -> Alanina
STOP: pozycja 77 w mRNA
Dlugosc tej sekwencji: 2 aminokwasow

===== PODSUMOWANIE =====
Liczba wykrytych sekwencji aminokwasowych: 1
Dlugosc sekwencji nr 1: 2 aminokwasow
Laczna liczba aminokwasow: 2

Czestosc wystepowania aminokwasow:
Metionina: 1 razy, 50%
Alanina: 1 razy, 50%
```

## Known Issue

During testing, an issue was observed with reading STOP codon frames. In some cases, the program may detect more sequences than expected because certain START codons may be counted even if they are not correctly matched with a STOP codon in the proper reading frame.

A possible future improvement would be to modify the logic so that a sequence is counted only after a complete START–STOP pair is found in the same reading frame.
