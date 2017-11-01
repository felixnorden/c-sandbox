.PHONY: clean All

All:
	@echo "----------Building project:[ exercise-2 - Debug ]----------"
	@cd "exercise-2" && "$(MAKE)" -f  "exercise-2.mk"
clean:
	@echo "----------Cleaning project:[ exercise-2 - Debug ]----------"
	@cd "exercise-2" && "$(MAKE)" -f  "exercise-2.mk" clean
