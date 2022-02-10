cmake_minimum_required(VERSION 3.8.0)

# message("Hello World")

set( name Matt Bob )
set( age 100 )

#message( "Both ${name} are of age ${age}" )

set( NAME Alice )
set( Alice Bob )
set( NAMEAliceBob Charlie )
# message( NAME ${NAME} ${${NAME}} )
message( ${NAME${NAME}${${NAME}}} )
# message( "NAME ${NAME} ${${NAME}}" )

