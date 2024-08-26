# CMake generated Testfile for 
# Source directory: /home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera
# Build directory: /home/hansol/ros2_ws/build/realsense_ros2_camera
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/copyright.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/opt/ros/dashing/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;31;ament_copyright;/opt/ros/dashing/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/cppcheck.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/cppcheck.xunit.xml" "--include_dirs" "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;55;ament_add_test;/opt/ros/dashing/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;67;ament_cppcheck;/opt/ros/dashing/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/cpplint.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;63;ament_add_test;/opt/ros/dashing/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;27;ament_cpplint;/opt/ros/dashing/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/flake8.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_flake8/flake8.txt" "--command" "/opt/ros/dashing/bin/ament_flake8" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/ros/dashing/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/dashing/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/lint_cmake.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/ros/dashing/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/dashing/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/pep257.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_pep257/pep257.txt" "--command" "/opt/ros/dashing/bin/ament_pep257" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/dashing/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/dashing/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/uncrustify.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;47;ament_add_test;/opt/ros/dashing/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;27;ament_uncrustify;/opt/ros/dashing/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/xmllint.xunit.xml" "--package-name" "realsense_ros2_camera" "--output-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/hansol/ros2_ws/build/realsense_ros2_camera/test_results/realsense_ros2_camera/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/dashing/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/dashing/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/dashing/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/dashing/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;138;ament_package;/home/hansol/ros2_ws/src/ros2_intel_realsense/realsense_ros2_camera/CMakeLists.txt;0;")
