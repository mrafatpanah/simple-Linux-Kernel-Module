# Linux simple kernel driver module

-- (Coded with: C programming language)

this project contains Driver:

-- test in Ubuntu OS (Linux)

# Driver
    -- Installation and executing:
        - Step-1: install make
            $ sudo apt-get update -y
            $ sudo apt-get install -y make

        - Step-2: execute make for build driver module
            $ sudo make

        - Step-3: insert driver module
            $ sudo insmod simple_driver.ko
            -- check driver log:
                $ sudo dmesg
