include ../Makefile.inc

DST = $(PREFIX)/lib/kcs/scripts
VAR = $(PREFIX)/var/lib/kcs

SRC = functions.sh mappings.sh sensors.sh beamformer.sh capture-start capture-stop capture-list capture-destination sync-now k7-accumulation-length k7-adc-snap-shot k7-quant-snap-shot k7-snap-shot k7-gain k7-frequency-select halt restart xport restart-mode-ready restart-mode-c16n13M4k restart-mode-c16n25M4k restart-mode-c16n2M4k restart-mode-c16n3M8k restart-mode-c16n7M4k restart-mode-c16n400M1k restart-mode-b16n400M1k restart-mode-c16n400M8k restart-mode-c8n7M4k_top restart-mode-bwbc4a label-input label-clear enable-sensors corr test-reload-rf-gain 

all:

clean:

install: all
	$(INSTALL) -d $(DST)
	$(INSTALL) $(SRC) $(DST)
