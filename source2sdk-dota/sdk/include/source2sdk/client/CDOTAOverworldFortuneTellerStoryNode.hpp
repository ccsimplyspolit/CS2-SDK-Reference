#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldFortuneTellerStoryNodeID_t.hpp"

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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldFortuneTellerStoryNode
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_fortune_teller_story_node"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::OverworldFortuneTellerStoryNodeID_t m_unID; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyDescription "Number of fortunes that must be requested before this node unlocks."
            std::int32_t m_nFortuneRequestCount; // 0x4            
            // metadata: MPropertyDescription "Name/key of the Visual Novel dialogue to play when this node is activated."
            CUtlString m_sDialogueName; // 0x8            
            // metadata: MPropertyDescription "Event action that grants the reward when this node is claimed."
            CUtlString m_sRewardEventAction; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerStoryNode, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerStoryNode, m_nFortuneRequestCount) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerStoryNode, m_sDialogueName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldFortuneTellerStoryNode, m_sRewardEventAction) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldFortuneTellerStoryNode) == 0x18);
    };
};
