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
        // Size: 0xe20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0xce0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xd20            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xd38            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0xd50            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xd70            
            float m_impactEnergyScale; // 0xd88            
            std::int32_t m_iMinHealthDmg; // 0xd8c            
            float m_flPressureDelay; // 0xd90            
            float m_flDefBurstScale; // 0xd94            
            Vector m_vDefBurstOffset; // 0xd98            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xda4            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xda8            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xdac            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xdb0            
            uint8_t _pad0db4[0x4]; // 0xdb4
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xdb8            
            CUtlString m_strBreakableContentsParticleOverride; // 0xdc0            
            bool m_bHasBreakPiecesOrCommands; // 0xdc8            
            uint8_t _pad0dc9[0x3]; // 0xdc9
            float m_explodeDamage; // 0xdcc            
            float m_explodeRadius; // 0xdd0            
            uint8_t _pad0dd4[0x4]; // 0xdd4
            CGlobalSymbol m_sExplosionType; // 0xdd8            
            float m_explosionDelay; // 0xde0            
            uint8_t _pad0de4[0x4]; // 0xde4
            CUtlSymbolLarge m_explosionBuildupSound; // 0xde8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xdf0            
            CUtlSymbolLarge m_explosionCustomSound; // 0xdf8            
            CUtlSymbolLarge m_explosionModifier; // 0xe00            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xe08            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xe0c            
            float m_flDefaultFadeScale; // 0xe10            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xe14            
            uint8_t _pad0e18[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xe20);
    };
};
