#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x920
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierGlitchVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_DebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle;
            char m_DebuffParticle[0xe0]; // 0x750            
            // m_PurgeCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PurgeCastParticle;
            char m_PurgeCastParticle[0xe0]; // 0x830            
            CSoundEventName m_PurgeSound; // 0x910            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierGlitchVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierGlitchVData) == 0x920);
    };
};
