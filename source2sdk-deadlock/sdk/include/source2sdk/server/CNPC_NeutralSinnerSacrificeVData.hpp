#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CNPC_TrooperNeutralVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_NeutralSinnerSacrificeVData : public source2sdk::server::CNPC_TrooperNeutralVData
        {
        public:
            // metadata: MPropertyStartGroup "Retaliation Attack"
            // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
            float m_flRetaliateDamage; // 0x16c0            
            // metadata: MPropertyStartGroup "NPC Vault Data"
            float m_flVaultMiniGameTime; // 0x16c4            
            float m_flVaultMiniGameHitWindow; // 0x16c8            
            float m_flVaultMiniGameWheelScrollTime; // 0x16cc            
            std::int32_t m_iVaultSuccessLightBuffDropCount; // 0x16d0            
            std::int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x16d4            
            float m_flVaultLightScrollTime; // 0x16d8            
            float m_flVaultWheelScrollTime; // 0x16dc            
            float m_flVaultSuccessLightsScroll; // 0x16e0            
            float m_flVaultSuccessWheelScroll; // 0x16e4            
            float m_flVaultSuccessDestroyTime; // 0x16e8            
            uint8_t _pad16ec[0x4]; // 0x16ec
            // m_VaultSuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VaultSuccessParticle;
            char m_VaultSuccessParticle[0xe0]; // 0x16f0            
            // metadata: MPropertyStartGroup "NPC Vault Sounds"
            CSoundEventName m_VaultIdleLoopSound; // 0x17d0            
            CSoundEventName m_VaultStartActiveSound; // 0x17e0            
            CSoundEventName m_VaultActiveLoopSound; // 0x17f0            
            CSoundEventName m_VaultStartCriticalSound; // 0x1800            
            CSoundEventName m_VaultCriticalLoopSound; // 0x1810            
            CSoundEventName m_VaultHitSuccessSoundLight; // 0x1820            
            CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x1830            
            CSoundEventName m_VaultHitFailSound; // 0x1840            
            CSoundEventName m_VaultHit01; // 0x1850            
            CSoundEventName m_VaultHit02; // 0x1860            
            CSoundEventName m_VaultHit03; // 0x1870            
            CSoundEventName m_VaultHit04; // 0x1880            
            CSoundEventName m_VaultHit05; // 0x1890            
            CSoundEventName m_VaultHit06; // 0x18a0            
            CSoundEventName m_VaultHit07; // 0x18b0            
            CSoundEventName m_VaultLight; // 0x18c0            
            CSoundEventName m_VaultLightHitWindow; // 0x18d0            
            CSoundEventName m_VaultWheelSuccessDing; // 0x18e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NeutralSinnerSacrificeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NeutralSinnerSacrificeVData) == 0x18f0);
    };
};
