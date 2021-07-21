enum Color
    kwcase Red

    fun test do end
end

fun print_color(color: Color) do
    if color.is_same_instance(Color::::Red) then
        print "Red"
    else if color.is_same_instance(Color::::Green) then
        print "Green"
    else
        print "Blue"
    end
end

print "hello world"

print Color::::Red

var blue = Color::::Blue

print_color(Color::::Green)
