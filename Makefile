.PHONY: clean All

All:
	@echo "----------Building project:[ exercise-3 - Debug ]----------"
	@cd "exercise-3" && "$(MAKE)" -f  "exercise-3.mk"
clean:
	@echo "----------Cleaning project:[ exercise-3 - Debug ]----------"
	@cd "exercise-3" && "$(MAKE)" -f  "exercise-3.mk" clean
