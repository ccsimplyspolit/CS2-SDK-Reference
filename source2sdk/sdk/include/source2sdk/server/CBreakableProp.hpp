#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xaf0
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad0990[0x8]; // 0x990
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x998            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x9f0            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0xa08            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xa28            
            float m_impactEnergyScale; // 0xa40            
            std::int32_t m_iMinHealthDmg; // 0xa44            
            QAngle m_preferredCarryAngles; // 0xa48            
            float m_flPressureDelay; // 0xa54            
            float m_flDefBurstScale; // 0xa58            
            Vector m_vDefBurstOffset; // 0xa5c            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xa68            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xa6c            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xa70            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xa74            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xa78            
            CUtlString m_strBreakableContentsParticleOverride; // 0xa80            
            bool m_bHasBreakPiecesOrCommands; // 0xa88            
            uint8_t _pad0a89[0x3]; // 0xa89
            float m_explodeDamage; // 0xa8c            
            float m_explodeRadius; // 0xa90            
            uint8_t _pad0a94[0x4]; // 0xa94
            CGlobalSymbol m_sExplosionType; // 0xa98            
            float m_explosionDelay; // 0xaa0            
            uint8_t _pad0aa4[0x4]; // 0xaa4
            CUtlSymbolLarge m_explosionBuildupSound; // 0xaa8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xab0            
            CUtlSymbolLarge m_explosionCustomSound; // 0xab8            
            CUtlSymbolLarge m_explosionModifier; // 0xac0            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xac8            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xacc            
            float m_flDefaultFadeScale; // 0xad0            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xad4            
            CUtlSymbolLarge m_iszPuntSound; // 0xad8            
            bool m_bUsePuntSound; // 0xae0            
            bool m_bOriginalBlockLOS; // 0xae1            
            uint8_t _pad0ae2[0xe];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
            // void InputForceDrop; // 0x0
            // bool InputSetNavIgnore; // 0x0
            // void InputEnablePuntSound; // 0x0
            // void InputDisablePuntSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0xaf0);
    };
};
