#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DebugSnapshotBaseStructuredData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1030
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Bone Transforms"
        #pragma pack(push, 1)
        struct DebugDrawBoneTransforms_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            // vecBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CTransform,128> vecBones;
            char vecBones[0x1020]; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in DebugDrawBoneTransforms_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::DebugDrawBoneTransforms_t) == 0x1030);
    };
};
