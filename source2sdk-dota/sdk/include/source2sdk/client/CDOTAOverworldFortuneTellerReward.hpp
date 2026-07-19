#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldFortuneReward.hpp"

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
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldFortuneTellerReward
        {
        public:
            // metadata: MPropertyDescription
            source2sdk::client::EOverworldFortuneReward m_eReward; // 0x0            
            // metadata: MPropertyDescription
            float m_flWeight; // 0x4            
            // metadata: MPropertyDescription
            std::uint32_t m_unEventActionID; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerReward, m_eReward) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerReward, m_flWeight) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerReward, m_unEventActionID) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldFortuneTellerReward) == 0xc);
    };
};
