AR:=/data00/android/android-ndk-r11c/toolchains/arm-linux-androideabi-4.9/prebuilt/linux-x86_64/bin/arm-linux-androideabi-ar

arm:
	cd mars_android_sdk/mars_libs/armeabi;\
	mkdir xlog;\
	cp libmarscomm.a xlog/;\
	cp libmarsxlog.a xlog/;\
	cd xlog;\
	$(AR) -x libmarscomm.a;\
	$(AR) -x libmarsxlog.a;\
	$(AR) -q libxlog.a *.o;\

android_86:
	cd mars_android_sdk/mars_libs/x86;\
	mkdir xlog;\
	cp libmarscomm.a xlog/;\
	cp libmarsxlog.a xlog/;\
	cd xlog;\
	$(AR) -x libmarscomm.a;\
	$(AR) -x libmarsxlog.a;\
	$(AR) -q libxlog.a *.o;\

fat:
	cd $(XLOG_PATH)/mars-log-iphone/mars.framework/; \
	rm -rf xlog; \
	mkdir -p xlog/armv7/;\
	lipo mars -thin armv7 -output xlog/armv7/xlog.a;\
	mkdir -p xlog/aarch64/;\
	lipo mars -thin arm64 -output xlog/aarch64/xlog.a;\
	mkdir -p xlog/x86_64/;\
	lipo mars -thin x86_64 -output xlog/x86_64/xlog.a;\