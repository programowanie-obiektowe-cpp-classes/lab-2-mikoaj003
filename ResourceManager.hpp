#pragma once

class ResourceManager
{
public:
    ResourceManager(Resource& r) : res(r) {}
    ResourceManager(const ResourceManager&)                = default;
    ResourceManager& operator=(const ResourceManager&)     = default;

    double get() const { return res.get(); }

private:
    Resource& res; 
};
