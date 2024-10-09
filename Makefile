all:
	@zig build

.PHONY: clear

clear:
	@rmdir /s /q zig-out

clearc:
	@rmdir /s /q .zig-cache