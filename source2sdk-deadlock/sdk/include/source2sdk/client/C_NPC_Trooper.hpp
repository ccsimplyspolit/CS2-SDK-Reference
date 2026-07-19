#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
        // Standard-layout class: false
        // Size: 0x1c20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
        #pragma pack(push, 1)
        class C_NPC_Trooper : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_iLane; // 0x1bd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnTargetedEnemyChanged"
            // metadata: MNotSaved
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x1bd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHealingChargeChanged"
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNotSaved
            float m_flHealingChargeParticlePct; // 0x1bd8            
            uint8_t _pad1bdc[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Trooper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Trooper) == 0x1c20);
    };
};
