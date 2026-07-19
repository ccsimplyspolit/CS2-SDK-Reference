#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_AI_Motor;
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
        // Standard-layout class: false
        // Size: 0xf00
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
        // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
        // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
        // static metadata: MNetworkVarNames "C_AI_Motor * m_pMotor"
        #pragma pack(push, 1)
        class C_AI_BaseNPC : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            uint8_t _pad0ee8[0x8]; // 0xee8
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::NPC_STATE m_NPCState; // 0xef0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bFadeCorpse; // 0xef4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bImportantRagdoll; // 0xef5            
            uint8_t _pad0ef6[0x2]; // 0xef6
            // metadata: MNetworkEnable
            source2sdk::client::C_AI_Motor* m_pMotor; // 0xef8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_AI_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_AI_BaseNPC) == 0xf00);
    };
};
