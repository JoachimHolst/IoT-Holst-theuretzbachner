-   **Binary**

    -   **Pickle (Python):**

        -   implements binary protocols for serializing and
            de-serializing a Python object structure

        -   not human-readable

        -   interoperable and Python-specific

    -   **CBOR:**

        -   JSON-oriented

        -   high processing and broadcast-speed

        -   not human-readable

        -   saves data in key-value pairs specific way of compressing
            data into binary

        -   "short, binary JSON"

        -   very hard and expensive to debug, which outweighs the
            savings

    -   not that big, size-wise

    -   ideal for sending pictures, audio, video

    -   used for large amounts of data

-   **Text**

    -   human-readable (duh)

    -   same data might be structured differently depending on the
        source (e.g. street addresses may be different from country to
        country)

    -   not that big, size-wise

-   **XML (SOAP)**

    -   SOAP = Simple Object Access Protocol, a simple application
        communication protocol

    -   uses XML information sets for its message format

    -   sends messages via application layer protocols (mostly HTTP)

    -   is able to communicate with and invoke processes running on
        disparate operating systems, since web protocols are installed
        and running on almost all OS

    -   can be implemented in any language and can be executed in any
        platform

    -   slow, since it uses  XML format which needs to be parsed and
        tends to be longer, too

    -   lot of overheadd

    -   depends on WSDL and does not have any standardized mechanism for
        dynamic discovery of the services

    -   XML has scheming-possibility

-   **JSON**

    -   text serialization format

    -   encoded to utf-8 most of the time

    -   human-readable

    -   more tolerant and easier to write clients in JSON; doesn't
        over-specify things (e.g. date can have different formats as
        long as it can be parsed)

    -   interoperable and widely used in different ecosystems

    -   no error-handling

    -   dangerous with untrusted service or browsers JSON service
        returns response wrapped in function call, which will be
        executed by the browser

    -   if exact scheme is needed, JSON is not helpful

-   **YAML**

    -   targets many of the same communications applications as XML, but
        has more minimal syntax

    -   uses Python-style indentation to indicate nesting

    -   uses more compact format (\[ \] for lists, { } for maps)

    -   human-readable

    -   available for many programming languages

    -   if exact scheme is needed, JSON is not helpful

<!-- -->

-   Publish Subscribe Pattern pattern most used in IoT

Most common IoT-Protocols!

**HTTP POST**

**CoAP**

-   specialized web transfer protocol for use with constrained nodes and
    constrained networks

-   machine-to-machine communication (e.g. for smart energy, building
    automation)

-   designed to enable simple, constrained devices to join the IoT even
    through constrained networks with low bandwidth and low availability

-   provides a request/response interaction model between application
    endpoints

-   supports built-in discovery of services and resources

-   includes key concepts of the Web such as URIs and Internet media
    types

-   can easily interface with HTTP for integration with the Web (while
    meeting specialized requirements such as multicast support)

-   has very low overhead

-   simple for constrained environments

-   provides memory per individual node

-   used by IKEA for home automation

-   uses UDP by default (less overhead, lower latency, less reliable)

-   certain TCP advantages can be implemented to provide failsafes

**MQTT**

-   Telemetry Transport or Message Queue Telemetry Transport

-   machine-to-machine communication

-   very lightweight

-   publish-subscribe system

-   runs over TCP/IP

-   MQTT used by Arduino used in the Lab
