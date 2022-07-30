KEYMAP_DIR=${QMK_HOME}/keyboards/mwstudio/mw65/keymaps/cuderbot
OUTPUT_FILE=mw65_rev1_cuderbot.bin

.PHONY: build
build: link
	qmk compile -j4 -kb mw65/rev1 -km cuderbot
	mv "${QMK_HOME}/${OUTPUT_FILE}" "build/${OUTPUT_FILE}"

.PHONY: link
link: unlink
	ln -sf "$(realpath src)" "${KEYMAP_DIR}"

.PHONY: unlink
unlink:
	rm -rf  "${KEYMAP_DIR}"

.PHONY: clean
clean: unlink
	qmk clean
