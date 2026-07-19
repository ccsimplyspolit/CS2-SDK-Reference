#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PhysInterfaceId_t.hpp"
#include "source2sdk/client/physics_save_sphere_t.hpp"
#include "source2sdk/mathlib_extended/AABB_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PhysObjectHeader_t
        {
        public:
            source2sdk::client::PhysInterfaceId_t type; // 0x0            
            // hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hEntity;
            char hEntity[0x4]; // 0x4            
            CUtlSymbolLarge fieldName; // 0x8            
            bool bSaveObject; // 0x10            
            uint8_t _pad0011[0x7]; // 0x11
            CUtlSymbolLarge modelName; // 0x18            
            source2sdk::mathlib_extended::AABB_t bbox; // 0x20            
            source2sdk::client::physics_save_sphere_t sphere; // 0x38            
            std::int32_t iCollide; // 0x3c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, type) == 0x0);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, hEntity) == 0x4);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, fieldName) == 0x8);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, bSaveObject) == 0x10);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, modelName) == 0x18);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, bbox) == 0x20);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, sphere) == 0x38);
        static_assert(offsetof(source2sdk::client::PhysObjectHeader_t, iCollide) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::PhysObjectHeader_t) == 0x40);
    };
};
