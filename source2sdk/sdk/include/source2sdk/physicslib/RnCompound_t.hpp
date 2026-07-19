#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/physicslib/RnCapsule_t.hpp"
#include "source2sdk/physicslib/RnHull_t.hpp"
#include "source2sdk/physicslib/RnMesh_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnCompound_t
        {
        public:
            // m_Spheres has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<RnSphere_t> m_Spheres;
            char m_Spheres[0x18]; // 0x0            
            // m_Capsules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnCapsule_t> m_Capsules;
            char m_Capsules[0x18]; // 0x18            
            // m_Hulls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnHull_t> m_Hulls;
            char m_Hulls[0x18]; // 0x30            
            // m_Meshes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnMesh_t> m_Meshes;
            char m_Meshes[0x18]; // 0x48            
            source2sdk::mathlib_extended::AABB_t m_Bounds; // 0x60            
            Vector m_vOrthographicAreas; // 0x78            
            float m_flSurfaceArea; // 0x84            
            float m_flVolume; // 0x88            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_Spheres) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_Capsules) == 0x18);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_Hulls) == 0x30);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_Meshes) == 0x48);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_Bounds) == 0x60);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_vOrthographicAreas) == 0x78);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_flSurfaceArea) == 0x84);
        static_assert(offsetof(source2sdk::physicslib::RnCompound_t, m_flVolume) == 0x88);
        
        static_assert(sizeof(source2sdk::physicslib::RnCompound_t) == 0x90);
    };
};
