#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x2a0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCS2WeaponGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_action has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_action;
            char m_action[0x18]; // 0x88            
            // m_bActionReset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bActionReset;
            char m_bActionReset[0x18]; // 0xa0            
            // m_flWeaponActionSpeedScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponActionSpeedScale;
            char m_flWeaponActionSpeedScale[0x18]; // 0xb8            
            // m_weaponCategory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponCategory;
            char m_weaponCategory[0x18]; // 0xd0            
            // m_weaponType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponType;
            char m_weaponType[0x18]; // 0xe8            
            // m_weaponExtraInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_weaponExtraInfo;
            char m_weaponExtraInfo[0x18]; // 0x100            
            // m_flWeaponAmmo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponAmmo;
            char m_flWeaponAmmo[0x18]; // 0x118            
            // m_flWeaponAmmoMax has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponAmmoMax;
            char m_flWeaponAmmoMax[0x18]; // 0x130            
            // m_flWeaponAmmoReserve has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponAmmoReserve;
            char m_flWeaponAmmoReserve[0x18]; // 0x148            
            // m_bWeaponIsSilenced has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bWeaponIsSilenced;
            char m_bWeaponIsSilenced[0x18]; // 0x160            
            // m_flWeaponIronsightAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponIronsightAmount;
            char m_flWeaponIronsightAmount[0x18]; // 0x178            
            // m_bIsUsingLegacyModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bIsUsingLegacyModel;
            char m_bIsUsingLegacyModel[0x18]; // 0x190            
            // m_idleVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_idleVariation;
            char m_idleVariation[0x18]; // 0x1a8            
            // m_deployVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_deployVariation;
            char m_deployVariation[0x18]; // 0x1c0            
            // m_attackType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_attackType;
            char m_attackType[0x18]; // 0x1d8            
            // m_attackThrowStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_attackThrowStrength;
            char m_attackThrowStrength[0x18]; // 0x1f0            
            // m_flAttackVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flAttackVariation;
            char m_flAttackVariation[0x18]; // 0x208            
            // m_inspectVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_inspectVariation;
            char m_inspectVariation[0x18]; // 0x220            
            // m_inspectExtraInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_inspectExtraInfo;
            char m_inspectExtraInfo[0x18]; // 0x238            
            // m_reloadStage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_reloadStage;
            char m_reloadStage[0x18]; // 0x250            
            uint8_t _pad0268[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCS2WeaponGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCS2WeaponGraphController) == 0x2a0);
    };
};
