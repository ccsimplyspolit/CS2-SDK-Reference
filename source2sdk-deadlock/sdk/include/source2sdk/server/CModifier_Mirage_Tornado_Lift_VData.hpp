#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x840
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Mirage_Tornado_Lift_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_HoldInPlaceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_HoldInPlaceModifier;
            char m_HoldInPlaceModifier[0x10]; // 0x750            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LiftParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle;
            char m_LiftParticle[0xe0]; // 0x760            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Lift_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_Tornado_Lift_VData) == 0x840);
    };
};
