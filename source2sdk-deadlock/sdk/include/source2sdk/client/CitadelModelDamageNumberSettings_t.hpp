#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelModelDamageNumberSettings_t
        {
        public:
            // metadata: MPropertyDescription "How far offset to the left and right will damage numbers be when this model takes damage and is near the camera"
            // metadata: MPropertyFriendlyName "Side Offset (near)"
            float m_flSideOffsetNear; // 0x0            
            // metadata: MPropertyDescription "How far offset to the left and right will damage numbers be when this model takes damage and is far from the camera"
            // metadata: MPropertyFriendlyName "Side Offset (far)"
            float m_flSideOffsetFar; // 0x4            
            // metadata: MPropertyDescription "How far vertically will damage numbers be when this model takes damage when the model is near"
            // metadata: MPropertyFriendlyName "Height Offset (near)"
            float m_flHeightOffsetNear; // 0x8            
            // metadata: MPropertyDescription "How far vertically will damage numbers be when this model takes damage when the model is far"
            // metadata: MPropertyFriendlyName "Height Offset (far)"
            float m_flHeightOffsetFar; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelModelDamageNumberSettings_t, m_flSideOffsetNear) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelModelDamageNumberSettings_t, m_flSideOffsetFar) == 0x4);
        static_assert(offsetof(source2sdk::client::CitadelModelDamageNumberSettings_t, m_flHeightOffsetNear) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelModelDamageNumberSettings_t, m_flHeightOffsetFar) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CitadelModelDamageNumberSettings_t) == 0x10);
    };
};
