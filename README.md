# PoreChop
# Language: C++
# Input: FASTQ
# Output: FASTQ
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependencies: porechop 0.2.4

PluMA plugin to trim adapters using PoreChop (Wick et al, 2017).

The plugin takes as input a FASTQ file, and outputs the FASTQ file with
trimmed reads.
Filtered sequences will be sent to the user-specified output directory
