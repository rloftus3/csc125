#SUBDIRS = madlib SVGrectangle stack mergesort letteroid doodlebug
SUBDIRS = doodlebug

all: $(SUBDIRS)

.PHONY: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
