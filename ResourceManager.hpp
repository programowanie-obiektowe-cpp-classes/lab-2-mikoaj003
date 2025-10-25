#pragma once

class ResourceManager
{
public:
    ResourceManager() : res(new Resource()) {}
    ResourceManager(const ResourceManager& other) : res(new Resource(*other.res)) {}
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this == &other)
            return *this;
        delete res;
        res = new Resource(*other.res);
        return *this;
    }

    }
    ~ResourceManager() { delete res; }
    double get() const { return res->get(); }

private:
    Resource* res;
};
