#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x958
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierTier2BossLaserBeamVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            bool m_bIsSideHead; // 0x750            
            uint8_t _pad0751[0x3]; // 0x751
            float m_flSideSearchRadius; // 0x754            
            float m_flSideSearchAngle; // 0x758            
            float m_flMinShootTime; // 0x75c            
            // metadata: MPropertyGroupName "Visuals"
            CUtlString m_strBeamStartAttachmentPoint; // 0x760            
            CUtlString m_strBeamStartAttachmentPoint02; // 0x768            
            CUtlString m_strBeamStartSearchPos; // 0x770            
            // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
            char m_BeamPreviewEffect[0xe0]; // 0x778            
            // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
            char m_BeamActiveEffect[0xe0]; // 0x858            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BeamLoopSound; // 0x938            
            CSoundEventName m_BeamFireSound; // 0x948            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierTier2BossLaserBeamVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierTier2BossLaserBeamVData) == 0x958);
    };
};
