from conan import ConanFile


class TaidaRecipe(ConanFile):
    settings = 'os', 'compiler', 'build_type', 'arch'
    generators = 'PremakeDeps'

    def requirements(self):
        pass

    def configure(self):
        pass
