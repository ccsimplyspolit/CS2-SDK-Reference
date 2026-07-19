#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"

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
        // Size: 0x298
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_GraphController : public source2sdk::client::CCitadelBaseAbilityGraphController
        {
        public:
            // m_bAiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bAiming;
            char m_bAiming[0x28]; // 0x90            
            // m_flReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flReloadSpeed;
            char m_flReloadSpeed[0x28]; // 0xb8            
            // m_bReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bReloadingSingleRoundStart;
            char m_bReloadingSingleRoundStart[0x28]; // 0xe0            
            // m_bReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bReloadingSingleRound;
            char m_bReloadingSingleRound[0x28]; // 0x108            
            // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bReloading;
            char m_bReloading[0x28]; // 0x130            
            // m_bShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bShootAlt;
            char m_bShootAlt[0x28]; // 0x158            
            // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bShoot;
            char m_bShoot[0x28]; // 0x180            
            // m_Shoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_Shoot;
            char m_Shoot[0x18]; // 0x1a8            
            // m_Muzzle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_Muzzle;
            char m_Muzzle[0x18]; // 0x1c0            
            // m_ReloadState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_ReloadState;
            char m_ReloadState[0x30]; // 0x1d8            
            // m_ReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_ReloadFraction;
            char m_ReloadFraction[0x28]; // 0x208            
            // m_ReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_ReloadSpeed;
            char m_ReloadSpeed[0x28]; // 0x230            
            // m_AmmoFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_AmmoFraction;
            char m_AmmoFraction[0x28]; // 0x258            
            std::int32_t m_nShootPriority; // 0x280            
            std::int32_t m_nReloadPriority; // 0x284            
            float m_flLatchedReloadSpeed; // 0x288            
            uint8_t _pad028c[0x4]; // 0x28c
            CGlobalSymbol m_symLastMuzzle; // 0x290            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon_GraphController) == 0x298);
    };
};
