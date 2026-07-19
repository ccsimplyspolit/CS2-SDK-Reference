#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc30
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0xaf0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xb30            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xb48            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0xb60            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xb80            
            float m_impactEnergyScale; // 0xb98            
            std::int32_t m_iMinHealthDmg; // 0xb9c            
            float m_flPressureDelay; // 0xba0            
            float m_flDefBurstScale; // 0xba4            
            Vector m_vDefBurstOffset; // 0xba8            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xbb4            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xbb8            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xbbc            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xbc0            
            uint8_t _pad0bc4[0x4]; // 0xbc4
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xbc8            
            CUtlString m_strBreakableContentsParticleOverride; // 0xbd0            
            bool m_bHasBreakPiecesOrCommands; // 0xbd8            
            uint8_t _pad0bd9[0x3]; // 0xbd9
            float m_explodeDamage; // 0xbdc            
            float m_explodeRadius; // 0xbe0            
            uint8_t _pad0be4[0x4]; // 0xbe4
            CGlobalSymbol m_sExplosionType; // 0xbe8            
            float m_explosionDelay; // 0xbf0            
            uint8_t _pad0bf4[0x4]; // 0xbf4
            CUtlSymbolLarge m_explosionBuildupSound; // 0xbf8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xc00            
            CUtlSymbolLarge m_explosionCustomSound; // 0xc08            
            CUtlSymbolLarge m_explosionModifier; // 0xc10            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xc18            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc1c            
            float m_flDefaultFadeScale; // 0xc20            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xc24            
            uint8_t _pad0c28[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xc30);
    };
};
