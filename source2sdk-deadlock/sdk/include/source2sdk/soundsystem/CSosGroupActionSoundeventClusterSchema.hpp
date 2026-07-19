#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Soundevent Cluster"
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventClusterSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Minimum Nearby Soundevents"
            std::int32_t m_nMinNearby; // 0x8            
            // metadata: MPropertyFriendlyName "Search Radius to Cluster Soundevents"
            float m_flClusterEpsilon; // 0xc            
            // metadata: MPropertyFriendlyName "'Should Play' Opvar Name"
            CUtlString m_shouldPlayOpvar; // 0x10            
            // metadata: MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
            CUtlString m_shouldPlayClusterChild; // 0x18            
            // metadata: MPropertyFriendlyName "Cluster Size Opvar Name"
            CUtlString m_clusterSizeOpvar; // 0x20            
            // metadata: MPropertyFriendlyName "'Group Box Mins' Opvar Name"
            CUtlString m_groupBoundingBoxMinsOpvar; // 0x28            
            // metadata: MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
            CUtlString m_groupBoundingBoxMaxsOpvar; // 0x30            
            uint8_t _pad0038[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventClusterSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventClusterSchema) == 0x50);
    };
};
