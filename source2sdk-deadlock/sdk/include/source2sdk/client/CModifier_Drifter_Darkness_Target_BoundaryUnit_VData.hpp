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
        // Size: 0x850
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Drifter_Darkness_Target_BoundaryUnit_VData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_strBoundaryPuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strBoundaryPuffParticle;
            char m_strBoundaryPuffParticle[0xe0]; // 0x750            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strAuraEnterPlayerSound; // 0x830            
            CSoundEventName m_strAuraEnterNPCSound; // 0x840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Drifter_Darkness_Target_BoundaryUnit_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Drifter_Darkness_Target_BoundaryUnit_VData) == 0x850);
    };
};
